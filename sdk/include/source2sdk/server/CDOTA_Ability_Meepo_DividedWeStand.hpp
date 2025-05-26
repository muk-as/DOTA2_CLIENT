#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nWhichDividedWeStand"
        // static metadata: MNetworkVarNames "int m_nNumDividedWeStand"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_Ability_Meepo_DividedWeStand> m_entPrimeDividedWeStand"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_Ability_Meepo_DividedWeStand> m_entNextDividedWeStand"
        #pragma pack(push, 1)
        class CDOTA_Ability_Meepo_DividedWeStand : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nWhichDividedWeStand; // 0x5c0            
            // metadata: MNetworkEnable
            std::int32_t m_nNumDividedWeStand; // 0x5c4            
            // metadata: MNetworkEnable
            // m_entPrimeDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Ability_Meepo_DividedWeStand> m_entPrimeDividedWeStand;
            char m_entPrimeDividedWeStand[0x4]; // 0x5c8            
            // metadata: MNetworkEnable
            // m_entNextDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_Ability_Meepo_DividedWeStand> m_entNextDividedWeStand;
            char m_entNextDividedWeStand[0x4]; // 0x5cc            
            std::int32_t m_iPendingUpgrades; // 0x5d0            
            uint8_t _pad05d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Meepo_DividedWeStand because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Meepo_DividedWeStand) == 0x5d8);
    };
};
