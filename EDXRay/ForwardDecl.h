#pragma once

namespace EDX
{
	namespace RayTracer
	{
		class Renderer;
		struct RenderJobDesc;
		class Camera;
		class Scene;
		class Film;
		class Integrator;
		class Light;
		class PointLight;
		class AreaLight;
		class BSDF;
		struct CameraSample;
		struct SampleBuffer;
		struct Sample;
		class Sampler;
		class Intersection;
		class DifferentialGeom;
		class Frame;
		class Primitive;
		class TriangleMesh;
		struct BuildTriangle;
		struct BuildVertex;
		class BVH2;
		class BVH4;
		class Triangle4;
		class RenderTask;
		class BuildTask;
		enum class BSDFType;
	}

	class RandomGen;
	class MemoryArena;
	class Color;
	class Ray;
	class RayDifferential;
	class ObjMesh;
}