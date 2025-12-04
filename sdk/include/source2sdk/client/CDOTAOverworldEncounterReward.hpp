#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldEncounterReward
        {
        public:
            std::uint32_t m_unRewardData; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sEventAction; // 0x_            
            KeyValues3 m_kvRewardExtraData; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounterReward, m_unRewardData) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounterReward, m_sEventAction) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldEncounterReward, m_kvRewardExtraData) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldEncounterReward) == 0x_);
    };
};
