#pragma once
class Engine
{
public:
	void Init(const WindowInfo& info);
	void Render();

	

public:
	// 커맨드 큐에 요청사항 넣는 함수
	void RenderBegin();

	// GPU에 모든 일감을 넘겨 실질적으로 그리는 작업이 시작되는 함수
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

