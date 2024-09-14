#pragma once
#include "source2sdk/rendersystemdx11/RenderInputLayoutField_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x38
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct WorldNodeOnDiskBufferData_t
    {
    public:
        int32_t m_nElementCount; // 0x0        
        int32_t m_nElementSizeInBytes; // 0x4        
        // m_inputLayoutFields has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<rendersystemdx11::RenderInputLayoutField_t> m_inputLayoutFields;
        char m_inputLayoutFields[0x18]; // 0x8        
        // m_pData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint8_t> m_pData;
        char m_pData[0x18]; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WorldNodeOnDiskBufferData_t, m_nElementCount) == 0x0);
    static_assert(offsetof(WorldNodeOnDiskBufferData_t, m_nElementSizeInBytes) == 0x4);
    static_assert(offsetof(WorldNodeOnDiskBufferData_t, m_inputLayoutFields) == 0x8);
    static_assert(offsetof(WorldNodeOnDiskBufferData_t, m_pData) == 0x20);
    
    static_assert(sizeof(WorldNodeOnDiskBufferData_t) == 0x38);
};
