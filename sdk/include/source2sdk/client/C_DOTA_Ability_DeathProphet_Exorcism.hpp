#pragma once
#include "source2sdk/client/C_DOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class sSpiritInfo;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x618
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Ability_DeathProphet_Exorcism : public client::C_DOTABaseAbility
    {
    public:
        // m_SpiritInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sSpiritInfo*> m_SpiritInfos;
        char m_SpiritInfos[0x18]; // 0x600        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_DeathProphet_Exorcism because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_DeathProphet_Exorcism) == 0x618);
};
