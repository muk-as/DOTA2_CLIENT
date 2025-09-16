#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PetLevelup_Rule_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC.hpp"
#include "source2sdk/server/PetCoopStates_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Hero;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_Pet_CarriedItem;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1910
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_BaseNPC_Pet : public source2sdk::server::CDOTA_BaseNPC
        {
        public:
            // m_hHeroHandle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Hero> m_hHeroHandle;
            char m_hHeroHandle[0x4]; // 0x18e0            
            float m_flPetThreatLevel; // 0x18e4            
            bool m_bReadyToPerformCoopTeleport; // 0x18e8            
            bool m_bSupportsCoopTeleport; // 0x18e9            
            uint8_t _pad18ea[0x2]; // 0x18ea
            source2sdk::server::PetCoopStates_t m_nCoopState; // 0x18ec            
            CUtlString m_strPickupItemModel; // 0x18f0            
            // m_hCarriedItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Pet_CarriedItem> m_hCarriedItem;
            char m_hCarriedItem[0x4]; // 0x18f8            
            std::int32_t m_nPetLevel; // 0x18fc            
            source2sdk::client::PetLevelup_Rule_t m_nLevelupRule; // 0x1900            
            uint8_t _pad1904[0x4]; // 0x1904
            std::int32_t m_nXPCompendiumEventID; // 0x1908            
            uint8_t _pad190c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_Pet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_Pet) == 0x1910);
    };
};
