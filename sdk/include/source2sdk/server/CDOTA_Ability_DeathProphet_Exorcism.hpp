#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class sSpiritInfo;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_DeathProphet_Exorcism : public server::CDOTABaseAbility
    {
    public:
        // m_SpiritInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sSpiritInfo*> m_SpiritInfos;
        char m_SpiritInfos[0x18]; // 0x5a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_DeathProphet_Exorcism because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_DeathProphet_Exorcism) == 0x5b8);
};
