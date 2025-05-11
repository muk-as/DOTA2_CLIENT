#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/rendersystemdx11/RenderSlotType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace rendersystemdx11
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
            std::uint8_t m_pSemanticName[32]; // 0x0            
            std::int32_t m_nSemanticIndex; // 0x20            
            std::uint32_t m_Format; // 0x24            
            std::int32_t m_nOffset; // 0x28            
            std::int32_t m_nSlot; // 0x2c            
            source2sdk::rendersystemdx11::RenderSlotType_t m_nSlotType; // 0x30            
            std::int32_t m_nInstanceStepRate; // 0x34            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::rendersystemdx11::RenderInputLayoutField_t, m_pSemanticName) == 0x0);
        static_assert(offsetof(source2sdk::rendersystemdx11::RenderInputLayoutField_t, m_nSemanticIndex) == 0x20);
        static_assert(offsetof(source2sdk::rendersystemdx11::RenderInputLayoutField_t, m_Format) == 0x24);
        static_assert(offsetof(source2sdk::rendersystemdx11::RenderInputLayoutField_t, m_nOffset) == 0x28);
        static_assert(offsetof(source2sdk::rendersystemdx11::RenderInputLayoutField_t, m_nSlot) == 0x2c);
        static_assert(offsetof(source2sdk::rendersystemdx11::RenderInputLayoutField_t, m_nSlotType) == 0x30);
        static_assert(offsetof(source2sdk::rendersystemdx11::RenderInputLayoutField_t, m_nInstanceStepRate) == 0x34);
        
        static_assert(sizeof(source2sdk::rendersystemdx11::RenderInputLayoutField_t) == 0x38);
    };
};
