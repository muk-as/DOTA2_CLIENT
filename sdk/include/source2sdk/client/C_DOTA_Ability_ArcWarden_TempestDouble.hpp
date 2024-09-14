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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hDoubles"
    #pragma pack(push, 1)
    class C_DOTA_Ability_ArcWarden_TempestDouble : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // m_hDoubles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hDoubles;
        char m_hDoubles[0x4]; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_ArcWarden_TempestDouble because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_ArcWarden_TempestDouble) == 0x5e0);
};
