

#ifndef GRAPHICS_OBJECT_TEXTURE_LIGHT_H
#define GRAPHICS_OBJECT_TEXTURE_LIGHT_H

#include "GraphicsObject.h"
#include "Textures/Texture.h"
#include "MathEngine.h"

namespace Azul
{
	class GraphicsObject_TextureLight : public GraphicsObject
	{
	public:
		GraphicsObject_TextureLight(Model* _pModel, ShaderObject* _pShaderObj, Vect& LightColor, Vect& LightPos, TextureManager::Name  _name = TextureManager::Name::DEFAULT);

		GraphicsObject_TextureLight() = delete;
		GraphicsObject_TextureLight(const GraphicsObject_TextureLight&) = delete;
		GraphicsObject_TextureLight& operator = (const GraphicsObject_TextureLight&) = delete;
		~GraphicsObject_TextureLight();

		// Rendermaterial contract
		virtual void SetState() override;
		virtual void SetDataGPU() override;
		virtual void Draw() override;
		virtual void RestoreState() override;

		// data:  place uniform instancing here

		TextureManager::Name  textName;
		Vect* poLightColor;
		Vect* poLightPos;
	};

}

#endif

// ---  End of File ---
