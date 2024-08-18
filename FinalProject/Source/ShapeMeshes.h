///////////////////////////////////////////////////////////////////////////////
// shapemeshes.h
// ============
// create meshes for various 3D primitives: 
//     box, cone, cylinder, plane, prism, pyramid, sphere, tapered cylinder, torus
//
//  AUTHOR: Brian Battersby - SNHU Instructor / Computer Science
//	Created for CS-330-Computational Graphics and Visualization, Nov. 7th, 2022
///////////////////////////////////////////////////////////////////////////////

#pragma once

#include <GL/glew.h>

#include <glm/glm.hpp>

/***********************************************************
 *  ShapeMeshes
 *
 *  This class contains the code for defining the various
 *  basic 3D shapes, loading into memory, and drawing
 ***********************************************************/
class ShapeMeshes
{
public:
	// constructor
	ShapeMeshes();

private:

	// stores the GL data relative to a given mesh
	struct GLMesh
	{
		GLuint vao;         // Handle for the vertex array object
		GLuint vbos[2];     // Handles for the vertex buffer objects
		GLuint nVertices;	// Number of vertices for the mesh
		GLuint nIndices;    // Number of indices for the mesh
	};

	// the available 3D shapes
	GLMesh m_BoxMesh;
	GLMesh m_ConeMesh;
	GLMesh m_CylinderMesh;
	GLMesh m_PlaneMesh;
	GLMesh m_PrismMesh;
	GLMesh m_Pyramid3Mesh;
	GLMesh m_Pyramid4Mesh;
	GLMesh m_SphereMesh;
	GLMesh m_TaperedCylinderMesh;
	GLMesh m_TorusMesh;

	GLMesh m_RTriangPrismMesh; // added shape right triangle prism for ramps
	GLMesh m_ZigMesh; // add shape for square frustum / zig steppe

	GLMesh m_TestZigMesh;

	bool m_bMemoryLayoutDone;

public:
	// methods for loading the shape mesh data 
	// into memory
	void LoadBoxMesh();
	void LoadBox2Mesh();
	void LoadConeMesh();
	void LoadCylinderMesh();
	void LoadPlaneMesh();
	void LoadPrismMesh();
	void LoadPyramid3Mesh();
	void LoadPyramid4Mesh();
	void LoadSphereMesh();
	void LoadTaperedCylinderMesh();
	void LoadTorusMesh(float thickness = 0.2);

	void LoadZigMesh(); // add shape for square frustum / zig steppe
	void LoadRTriangPrismMesh(); // added shape right triangle prism for ramps


	void LoadTestZig();

	// methods for drawing the shape mesh in the
	// display window
	void DrawBoxMesh();
	void DrawBox2Mesh();
	void DrawConeMesh(
		bool bDrawBottom=true);
	void DrawCylinderMesh(
		bool bDrawTop=true,
		bool bDrawBottom=true,
		bool bDrawSides = true);
	void DrawPlaneMesh();
	void DrawPrismMesh();
	void DrawPyramid3Mesh();
	void DrawPyramid4Mesh();
	void DrawSphereMesh();
	void DrawHalfSphereMesh();
	void DrawTaperedCylinderMesh(
		bool bDrawTop = true,
		bool bDrawBottom = true,
		bool bDrawSides = true);
	void DrawTorusMesh();
	void DrawHalfTorusMesh();
	void DrawTestZig();

	void DrawRTriangPrismMesh(); // added shape right triangle prism for ramps

	void DrawZigMesh(); // add shape for square frustum / zig steppe


private:

	// called to calculate the normal for 
	// the passed in coordinates
	glm::vec3 CalculateTriangleNormal(
		glm::vec3 px, glm::vec3 py, glm::vec3 pz);

	// called to set the memory layout 
	// template for shader data
	void SetShaderMemoryLayout();
};