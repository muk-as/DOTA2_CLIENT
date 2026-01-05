#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_PointEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CInfoInteraction : public source2sdk::client::C_PointEntity
        {
        public:
            float m_flInteractRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_strInteractVData; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoInteraction because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CInfoInteraction) == 0x_);
    };
};
