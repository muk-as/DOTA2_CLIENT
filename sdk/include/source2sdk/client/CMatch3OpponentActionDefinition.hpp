#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CMatch3AbilityBaseDefinition.hpp"
#include "source2sdk/client/Match3OpponentActionID_t.hpp"

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CMatch3OpponentActionDefinition : public source2sdk::client::CMatch3AbilityBaseDefinition
        {
        public:
            source2sdk::client::Match3OpponentActionID_t m_unOpponentActionID; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMatch3OpponentActionDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CMatch3OpponentActionDefinition) == 0x_);
    };
};
