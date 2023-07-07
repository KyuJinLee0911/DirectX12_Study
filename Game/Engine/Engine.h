#pragma once
class Engine
{
public:
	void Init(const WindowInfo& info);
	void Render();

	

public:
	// Ŀ�ǵ� ť�� ��û���� �ִ� �Լ�
	void RenderBegin();

	// GPU�� ��� �ϰ��� �Ѱ� ���������� �׸��� �۾��� ���۵Ǵ� �Լ�
	void RenderEnd();

	void ResizeWindow(int32 width, int32 height);

private:
	WindowInfo		_window;
	D3D12_VIEWPORT	_viewport = {};
	D3D12_RECT		_scissorRect = {};

	shared_ptr<class Device> _device;
	shared_ptr<class CommandQueue> _cmdQueue;
	shared_ptr<class SwapChain> _swapChain;
	shared_ptr<class DescriptorHeap> _descHeap;

};

