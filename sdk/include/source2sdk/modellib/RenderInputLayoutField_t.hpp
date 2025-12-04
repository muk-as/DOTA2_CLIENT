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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct RenderInputLayoutField_t
        {
        public:
            char m_pSemanticName[32]; // 0x_            
            std::int8_t m_nSemanticIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int16_t m_nOffset; // 0x_            
            std::int8_t m_nSlot; // 0x_            
            source2sdk::modellib::RenderSlotType_t m_nSlotType; // 0x_            
            char m_szShaderSemantic[32]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_pSemanticName) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nSemanticIndex) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nOffset) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nSlot) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_nSlotType) == 0x_);
        static_assert(offsetof(source2sdk::modellib::RenderInputLayoutField_t, m_szShaderSemantic) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::RenderInputLayoutField_t) == 0x_);
    };
};
