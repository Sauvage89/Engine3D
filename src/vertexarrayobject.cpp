class VertexArrayObject
{
public:
    VertexArrayObject(ID3D11Device* device,
                      const std::vector<Vertex>& vertices,
                      const std::vector<uint32_t>& indices);
    
    void Bind(ID3D11DeviceContext* context) const;
    void Unbind(ID3D11DeviceContext* context) const;

private:
    ComPtr<ID3D11Buffer> m_vertexBuffer;
    ComPtr<ID3D11Buffer> m_indexBuffer;
    ComPtr<ID3D11InputLayout> m_inputLayout;
    UINT m_indexCount;
};
