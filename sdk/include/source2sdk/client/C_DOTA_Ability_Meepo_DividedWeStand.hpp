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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x610
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_nWhichDividedWeStand"
    // static metadata: MNetworkVarNames "int m_nNumDividedWeStand"
    // static metadata: MNetworkVarNames "CHandle< CDOTA_Ability_Meepo_DividedWeStand> m_entPrimeDividedWeStand"
    // static metadata: MNetworkVarNames "CHandle< CDOTA_Ability_Meepo_DividedWeStand> m_entNextDividedWeStand"
    #pragma pack(push, 1)
    class C_DOTA_Ability_Meepo_DividedWeStand : public client::C_DOTABaseAbility
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_nWhichDividedWeStand; // 0x600        
        // metadata: MNetworkEnable
        int32_t m_nNumDividedWeStand; // 0x604        
        // metadata: MNetworkEnable
        // m_entPrimeDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_Ability_Meepo_DividedWeStand> m_entPrimeDividedWeStand;
        char m_entPrimeDividedWeStand[0x4]; // 0x608        
        // metadata: MNetworkEnable
        // m_entNextDividedWeStand has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_Ability_Meepo_DividedWeStand> m_entNextDividedWeStand;
        char m_entNextDividedWeStand[0x4]; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Ability_Meepo_DividedWeStand because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Ability_Meepo_DividedWeStand) == 0x610);
};
