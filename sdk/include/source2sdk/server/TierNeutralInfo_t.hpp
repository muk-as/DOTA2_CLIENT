#pragma once
#include "source2sdk/client/AbilityID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nTier"
    // static metadata: MNetworkVarNames "AbilityID_t m_nAbilityID"
    #pragma pack(push, 1)
    struct TierNeutralInfo_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x30]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_nTier; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x4]; // 0x34
        // metadata: MNetworkEnable
        // m_nAbilityID has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::AbilityID_t> m_nAbilityID;
        char m_nAbilityID[0x18]; // 0x38        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(TierNeutralInfo_t, m_nTier) == 0x30);
    static_assert(offsetof(TierNeutralInfo_t, m_nAbilityID) == 0x38);
    
    static_assert(sizeof(TierNeutralInfo_t) == 0x50);
};
