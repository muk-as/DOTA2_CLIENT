#pragma once
#include "source2sdk/rendersystemdx11/RenderSlotType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x38
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct RenderInputLayoutField_t
    {
    public:
        uint8_t m_pSemanticName[32]; // 0x0        
        int32_t m_nSemanticIndex; // 0x20        
        uint32_t m_Format; // 0x24        
        int32_t m_nOffset; // 0x28        
        int32_t m_nSlot; // 0x2c        
        rendersystemdx11::RenderSlotType_t m_nSlotType; // 0x30        
        int32_t m_nInstanceStepRate; // 0x34        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(RenderInputLayoutField_t, m_pSemanticName) == 0x0);
    static_assert(offsetof(RenderInputLayoutField_t, m_nSemanticIndex) == 0x20);
    static_assert(offsetof(RenderInputLayoutField_t, m_Format) == 0x24);
    static_assert(offsetof(RenderInputLayoutField_t, m_nOffset) == 0x28);
    static_assert(offsetof(RenderInputLayoutField_t, m_nSlot) == 0x2c);
    static_assert(offsetof(RenderInputLayoutField_t, m_nSlotType) == 0x30);
    static_assert(offsetof(RenderInputLayoutField_t, m_nInstanceStepRate) == 0x34);
    
    static_assert(sizeof(RenderInputLayoutField_t) == 0x38);
};
