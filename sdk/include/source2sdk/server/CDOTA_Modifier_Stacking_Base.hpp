#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CDOTA_Modifier_Stacking_Base : public source2sdk::client::CDOTA_Buff
        {
        public:
            std::int32_t max_stacks; // 0x_            
            bool destroy_on_zero_stacks; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float sub_modifier_forced_duration; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_szSubModifierName; // 0x_            
            KeyValues* m_pSubModifierKV; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Stacking_Base because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Stacking_Base) == 0x_);
    };
};
