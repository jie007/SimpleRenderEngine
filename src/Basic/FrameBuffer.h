#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H
#include <glew\glew.h>
namespace Basic {

	class FrameBuffer {//���

	public:
		bool createFrameBufferWithTexture(int width, int height);

		void bindFrameBuffer(bool isFullViewPort = true);
		void bindFrameBufferTexture(int units, bool isMipMap = true);
	private:
		int _width, _height;
		unsigned int _fbo;
		unsigned int _texture;

	};
}
#endif // !FRAMEBUFFER_H

