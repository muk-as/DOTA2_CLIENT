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
    // Size: 0x5e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hBear"
    #pragma pack(push, 1)
    class C_DOTA_Ability_LoneDruid_SpiritBear : public client::C_DOTABaseAbility
    {
    public:
        bool m_bLevelChanged; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5d9[0x3]; // 0x5d9
        // metadata: MNetworkEnable
        // m_hBear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBear;
        char m_hBear[0x4]; // 0x5dc        
        // m_hPreBear has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreBear;
        char m_hPreBear[0x4]; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_LoneDruid_SpiritBear because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_LoneDruid_SpiritBear) == 0x5e8);
};
