#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityComponent.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CHitboxComponent : public source2sdk::entity2::CEntityComponent
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            float m_flBoundsExpandRadius; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CHitboxComponent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CHitboxComponent) == 0x_);
    };
};
