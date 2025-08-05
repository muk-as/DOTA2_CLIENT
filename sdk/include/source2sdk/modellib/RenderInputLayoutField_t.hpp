#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/RenderSlotType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: unknown
        // Alignment: 0x2
        // Standard-layout class: true
        // Size: 0x4c
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RenderInputLayoutField_t
        {
        public:
            char m_pSemanticName[32]; // 0x0            
            std::int8_t m_nSemanticIndex; // 0x20            
            uint8_t _pad0021[0x7]; // 0x21
            std::int16_t m_nOffset; // 0x28            
            std::int8_t m_nSlot; // 0x2a            
            source2sdk::modellib::RenderSlotType_t m_nSlotType; // 0x2b            
            char m_szShaderSemantic[32]; // 0x2c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_pSemanticName) == 0x0);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nSemanticIndex) == 0x20);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nOffset) == 0x28);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nSlot) == 0x2a);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nSlotType) == 0x2b);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_szShaderSemantic) == 0x2c);
        
        static_assert(sizeof(source2sdk::modellib::RenderInputLayoutField_t) == 0x4c);
    };
};
