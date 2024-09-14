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
    // Size: 0x600
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_DOTA_Ability_Meepo_MegaMeepo : public client::C_DOTABaseAbility
    {
    public:
        // hPreviousMeepo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hPreviousMeepo;
        char hPreviousMeepo[0x4]; // 0x5d8        
        // hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> hMegameepoFrame;
        char hMegameepoFrame[0x4]; // 0x5dc        
        // hListOfMeepos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> hListOfMeepos;
        char hListOfMeepos[0x18]; // 0x5e0        
        bool m_bHasSwappedAbilities; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Meepo_MegaMeepo because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Meepo_MegaMeepo) == 0x600);
};
