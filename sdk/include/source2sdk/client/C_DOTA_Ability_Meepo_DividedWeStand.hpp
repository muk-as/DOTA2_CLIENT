#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nWhichDividedWeStand"
        // static metadata: MNetworkVarNames "int m_nNumDividedWeStand"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_Ability_Meepo_DividedWeStand> m_entPrimeDividedWeStand"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_Ability_Meepo_DividedWeStand> m_entNextDividedWeStand"
        #pragma pack(push, 1)
        class C_DOTA_Ability_Meepo_DividedWeStand : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_nWhichDividedWeStand; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_nNumDividedWeStand; // 0x_            
            // metadata: MNetworkEnable
            // m_entPrimeDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_Ability_Meepo_DividedWeStand> m_entPrimeDividedWeStand;
            char m_entPrimeDividedWeStand[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_entNextDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_Ability_Meepo_DividedWeStand> m_entNextDividedWeStand;
            char m_entNextDividedWeStand[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Meepo_DividedWeStand because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Meepo_DividedWeStand) == 0x_);
    };
};
