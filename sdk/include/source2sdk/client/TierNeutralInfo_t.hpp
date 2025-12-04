#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AbilityID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nTier"
        // static metadata: MNetworkVarNames "AbilityID_t m_nAbilityID"
        #pragma pack(push, 1)
        struct TierNeutralInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            std::int32_t m_nTier; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_nAbilityID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::client::AbilityID_t> m_nAbilityID;
            char m_nAbilityID[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TierNeutralInfo_t, m_nTier) == 0x_);
        static_assert(offsetof(source2sdk::client::TierNeutralInfo_t, m_nAbilityID) == 0x_);
        
        static_assert(sizeof(source2sdk::client::TierNeutralInfo_t) == 0x_);
    };
};
