#include "SRP/SRPMain.h"
#include "OCP/OCPMain.h"
#include "LSP/LSPMain.h"
#include "ISP/ISPMain.h"
#include "DIP/DIPMain.h"

int main()
{
    std::printf("SRP\n");
    SRP::SRPMain().Main();

    std::printf("OCP\n");
    OCP::OCPMain().Main();

    std::printf("LSP\n");
    LSP::LSPMain().Main();

    std::printf("ISP\n");
    ISP::ISPMain().Main();

    std::printf("DIP\n");
    DIP::DIPMain().Main();
}