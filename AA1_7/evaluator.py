import os
import requests

SRC_FOLDER = "src"
OUTPUT_FILE = "evaluation.md"
PROMPT_FILE = "prompt.txt"

LM_STUDIO_COMPLETIONS_URL = "http://127.0.0.1:1234/v1/completions"
MODEL_NAME = "openai/gpt-oss-20b"


def read_prompt():
    with open(PROMPT_FILE, "r", encoding="utf-8") as f:
        return f.read()


def find_code_files():
    files = []
    for root, _, filenames in os.walk(SRC_FOLDER):
        for file in filenames:
            if file.endswith(".cpp") or file.endswith(".h"):
                files.append(os.path.join(root, file))
    return files


def read_code_file(path):
    with open(path, "r", encoding="utf-8") as f:
        return f.read()


def evaluate_code(code, prompt):
    payload = {
        "model": MODEL_NAME,
        "prompt": prompt + "\n\n" + code,
        "temperature": 0.2,
        "max_tokens": 500
    }

    response = requests.post(
        LM_STUDIO_COMPLETIONS_URL,
        json=payload
    )
    response.raise_for_status()

    return response.json()["choices"][0]["text"]


def save_result(text):
    with open(OUTPUT_FILE, "w", encoding="utf-8") as f:
        f.write("# Code Evaluation\n\n")
        f.write(text)


def main():
    prompt = read_prompt()
    files = find_code_files()

    if not files:
        print("No .cpp or .h files found.")
        return

    for file in files:
        try:
            print("Evaluating:", file)
            code = read_code_file(file)
            result = evaluate_code(code, prompt)
            save_result(result)
            print("Evaluation saved to evaluation.md")
            break
        except Exception as e:
            print("Error:", e)


main()