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
    // Size: 0x1840
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Pet : public server::CDOTA_BaseNPC
    {
    public:
        // m_hHeroHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC_Hero> m_hHeroHandle;
        char m_hHeroHandle[0x4]; // 0x1810        
        float m_flPetThreatLevel; // 0x1814        
        bool m_bReadyToPerformCoopTeleport; // 0x1818        
        bool m_bSupportsCoopTeleport; // 0x1819        
        [[maybe_unused]] std::uint8_t pad_0x181a[0x2]; // 0x181a
        server::PetCoopStates_t m_nCoopState; // 0x181c        
        CUtlString m_strPickupItemModel; // 0x1820        
        // m_hCarriedItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_Pet_CarriedItem> m_hCarriedItem;
        char m_hCarriedItem[0x4]; // 0x1828        
        int32_t m_nPetLevel; // 0x182c        
        client::PetLevelup_Rule_t m_nLevelupRule; // 0x1830        
        [[maybe_unused]] std::uint8_t pad_0x1834[0x4]; // 0x1834
        int32_t m_nXPCompendiumEventID; // 0x1838        
        [[maybe_unused]] std::uint8_t pad_0x183c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Pet because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Pet) == 0x1840);
};
