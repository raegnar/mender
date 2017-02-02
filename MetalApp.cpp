//*****************************************************************************
//TessApp.cpp*****************************************************************
//*****************************************************************************

//Header include
#include "MetalApp.h"


//Render Library Includes

//Standard Library Includes
#include <numeric>
#include <sstream>

//Namespaces
using namespace std;

//namespace imgui = ImGui;

//*****************************************************************************
//Constructor******************************************************************
//*****************************************************************************
MetalApp::MetalApp(string title, int width, int height, const std::vector<std::string> &args) : AppMacOS(title, width, height, false)//, tessPatch(quadPatch)
{

	string filename = (args.size() > 0) ? args[0] : "";

	cerr << "filename: " << filename << endl;

}
//*****************************************************************************
//Initialize*******************************************************************
//*****************************************************************************
void MetalApp::init()
{
}
//*****************************************************************************
//Render***********************************************************************
//*****************************************************************************
void MetalApp::render()
{
}
//*****************************************************************************
//Events***********************************************************************
//*****************************************************************************
//void MetalApp::resize()
//{
//}
////-----------------------------------------------------------------------------
//void MetalApp::mousemove()
//{
//}
//*****************************************************************************
//Update***********************************************************************
//*****************************************************************************
void MetalApp::update()
{
}
//*****************************************************************************
//Miscellaneous****************************************************************
//*****************************************************************************
void MetalApp::initCam()
{
}