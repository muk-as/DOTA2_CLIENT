#pragma once
#include "source2sdk/client/PetLevelup_Rule_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
#include "source2sdk/server/PetCoopStates_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CDOTA_BaseNPC_Hero;
};

namespace source2sdk::server
{
    class CDOTA_Pet_CarriedItem;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1898
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Pet : public server::CDOTA_BaseNPC
    {
    public:
        // m_hHeroHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC_Hero> m_hHeroHandle;
        char m_hHeroHandle[0x4]; // 0x1868        
        float m_flPetThreatLevel; // 0x186c        
        bool m_bReadyToPerformCoopTeleport; // 0x1870        
        bool m_bSupportsCoopTeleport; // 0x1871        
        [[maybe_unused]] std::uint8_t pad_0x1872[0x2]; // 0x1872
        server::PetCoopStates_t m_nCoopState; // 0x1874        
        CUtlString m_strPickupItemModel; // 0x1878        
        // m_hCarriedItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_Pet_CarriedItem> m_hCarriedItem;
        char m_hCarriedItem[0x4]; // 0x1880        
        int32_t m_nPetLevel; // 0x1884        
        client::PetLevelup_Rule_t m_nLevelupRule; // 0x1888        
        [[maybe_unused]] std::uint8_t pad_0x188c[0x4]; // 0x188c
        int32_t m_nXPCompendiumEventID; // 0x1890        
        [[maybe_unused]] std::uint8_t pad_0x1894[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Pet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Pet) == 0x1898);
};
