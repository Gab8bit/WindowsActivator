#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void eseguiCMD(const char* comando) {
    // Costruisci il comando completo
    char comandoCompleto[256];
    snprintf(comandoCompleto, sizeof(comandoCompleto), "cmd /c %s", comando);

    // Esegui il comando
    int risultato = system(comandoCompleto);

    // Controlla il risultato dell'esecuzione
    if (risultato != 0) {
        printf("ERROR DURING COMMAND: '%s'\n", comando);
    }
}

void setServer(){
    int risultato = system("slmgr /skms kms9.msguides.com");

    // Controlla il risultato dell'esecuzione
    if (risultato != 0) {
        printf("ERROR DURING COMMAND: 'slmgr /skms kms9.msguides.com'\n");
    }
}

void activate(){
    int risultato = system("slmgr /ato");

    // Controlla il risultato dell'esecuzione
    if (risultato != 0) {
        printf("ERROR DURING COMMAND: 'slmgr /ato'\n");
    }
}



int main() {
    // Richiedi i permessi di amministratore (UAC)
    if (!IsUserAnAdmin()) {
        printf("Requesting admin privileges...\n");

        // Ottieni il percorso dell'eseguibile corrente
        char moduleFileName[MAX_PATH];
        GetModuleFileName(NULL, moduleFileName, MAX_PATH);

        // Avvia un nuovo processo con i permessi di amministratore
        if (ShellExecute(NULL, "runas", moduleFileName, NULL, NULL, SW_SHOWNORMAL) <= (HINSTANCE)32) {
            printf("Unable to obtain admin privileges. Exiting.\n");
            return 1;
        }

        // Uscita dal processo corrente
        return 0;
    }

    // Se siamo qui, abbiamo ottenuto i permessi di amministratore
    printf("Admin privileges obtained successfully!\n");

    //Scelta versione
    int sv;
    system("cls");
    system("title Windows Activator by Gab8bit");
    printf("Choose Windows version:\n");
    printf("1. Windows (Client)\n");
    printf("2. Windows Server\n");
    printf("\nIf you don't know, choose option 1\n\n");
    printf("> ");
    scanf("%d", &sv);

    switch(sv){
        case 1:
            int scelta;
            system("cls");
            printf("Choose Windows edition:\n");
            printf("1. Home\n");
            printf("2. Home N\n");
            printf("3. Home Single Language\n");
            printf("4. Home Country Specific\n");
            printf("5. Professional\n");
            printf("6. Professional N\n");
            printf("7. Education\n");
            printf("8. Education N\n");
            printf("9. Enterprise\n");
            printf("10. Enterprise N\n");

            printf("> ");
            scanf("%d", &scelta);

            // Gestisci la scelta
            system("cls");
            switch (scelta) {
                case 1:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk TX9XD-98N7V-6WMQ6-BX7FG-H8Q99");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 2:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk 3KHY7-WNT83-DGQKR-F7HPR-844BM");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 3:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk 7HNRX-D7KGG-3K4RQ-4WPJ4-YTDFH");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 4:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk PVMJN-6DFY6-9CCP6-7BKTT-D3WVR");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 5:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 6:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk MH37W-N47XK-V7XM9-C7227-GCQG9");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 7:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk NW6C2-QMPVW-D7KKK-3GKT6-VCFB2");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 8:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk 2WH4N-8QGBV-H22JP-CT43Q-MDWWJ");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 9:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 10:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            break;
        case 2:
            int scelta1;
            printf("Choose Windows Server edition:\n");
            printf("1. Windows Server 2022 Datacenter\n");
            printf("2. Windows Server 2022 Standard\n");
            printf("3. Windows Server 2019 Datacenter\n");
            printf("4. Windows Server 2019 Standard\n");
            printf("5. Windows Server 2019 Essentials\n");
            printf("6. Windows Server 2016 Datacenter\n");
            printf("7. Windows Server 2016 Standard\n");
            printf("8. Windows Server 2016 Essentials\n");
            printf("> ");
            scanf("%d", &scelta1);

            // Gestisci la scelta
            system("cls");
            switch (scelta1) {
                case 1:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk WX4NM-KYWYW-QJJR4-XV3QB-6VM33");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 2:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk VDYBN-27WPP-V4HQT-9VMD4-VMK7H");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 3:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk WMDGN-G9PQG-XVVXX-R3X43-63DFG");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 4:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk N69G4-B89J2-4G8F4-WWYCC-J464C");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 5:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk WVDHN-86M7X-466P6-VHXV7-YY726");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 6:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk CB7KF-BWN84-R7R2Y-793K2-8XDDG");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 7:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk WC2BQ-8NRM3-FDDYY-2BFGV-KHKQY");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                case 8:
                    printf("Windows Key installation...\n");
                    eseguiCMD("slmgr /ipk JCKRF-N37P4-C2D82-9YXRT-4M63B");
                    printf("Changing KMS server...\n");
                    setServer();
                    printf("Activating Windows...\n");
                    activate();
                    break;
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }
    

    return 0;
}
