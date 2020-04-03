#include "vtkDICOMImageReader.h"
#include "vtkRenderer.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"

int main(int argc,char** argv)
{
    //Dicom folder
    const char *dirname = "manyslice";
    vtkDICOMImageReader *dcReader = vtkDICOMImageReader::New();
    dcReader->SetDirectoryName(dirname);

    //render
    vtkRenderer *renderer = vtkRenderer::New();
    vtkRenderWindow *renderWindow = vtkRenderWindow::New();
    renderWindow->SetSize(800,1000);
    renderWindow->AddRenderer(renderer);

    vtkRenderWindowInteractor* iren = vtkRenderWindowInteractor::New();
    iren->SetRenderWindow(renderWindow);


    
    return 0;
}