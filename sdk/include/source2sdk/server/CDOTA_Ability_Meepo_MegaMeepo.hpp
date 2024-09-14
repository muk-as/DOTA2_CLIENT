#pragma once
#include "source2sdk/server/CDOTABaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Ability_Meepo_MegaMeepo : public server::CDOTABaseAbility
    {
    public:
        // hPreviousMeepo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hPreviousMeepo;
        char hPreviousMeepo[0x4]; // 0x5a0        
        // hMegameepoFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hMegameepoFrame;
        char hMegameepoFrame[0x4]; // 0x5a4        
        // hListOfMeepos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> hListOfMeepos;
        char hListOfMeepos[0x18]; // 0x5a8        
        bool m_bHasSwappedAbilities; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Ability_Meepo_MegaMeepo because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Ability_Meepo_MegaMeepo) == 0x5c8);
};
