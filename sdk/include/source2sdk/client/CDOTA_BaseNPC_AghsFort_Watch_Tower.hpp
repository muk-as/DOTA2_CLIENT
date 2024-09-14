#pragma once
#include "source2sdk/client/CDOTA_BaseNPC_AghsFort_Watch_Tower__ExitDirection_t.hpp"
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseAnimatingActivity;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nEncounterType"
    // static metadata: MNetworkVarNames "bool m_bIsEliteEncounter"
    // static metadata: MNetworkVarNames "bool m_bIsAscensionLevelPicker"
    // static metadata: MNetworkVarNames "string_t m_strEncounterName"
    // static metadata: MNetworkVarNames "string_t m_strAscensionAbilities"
    // static metadata: MNetworkVarNames "EHANDLE m_hEffigy"
    // static metadata: MNetworkVarNames "CHandle<CBaseAnimating> m_hRoomGate"
    // static metadata: MNetworkVarNames "bool m_bIsBeingChanneled"
    // static metadata: MNetworkVarNames "float m_flGoalCaptureProgress"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_AghsFort_Watch_Tower : public client::C_DOTA_BaseNPC_Building
    {
    public:
        int32_t m_nOptionNumber; // 0x1870        
        float m_flMovePlayersRadius; // 0x1874        
        client::CDOTA_BaseNPC_AghsFort_Watch_Tower__ExitDirection_t m_nExitDirection; // 0x1878        
        Vector m_vExitLocation; // 0x187c        
        int32_t m_nPathSelectedID; // 0x1888        
        // metadata: MNetworkEnable
        int32_t m_nEncounterType; // 0x188c        
        // metadata: MNetworkEnable
        bool m_bIsEliteEncounter; // 0x1890        
        // metadata: MNetworkEnable
        bool m_bIsAscensionLevelPicker; // 0x1891        
        [[maybe_unused]] std::uint8_t pad_0x1892[0x6]; // 0x1892
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strEncounterName; // 0x1898        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strAscensionAbilities; // 0x18a0        
        // metadata: MNetworkEnable
        // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEffigy;
        char m_hEffigy[0x4]; // 0x18a8        
        float m_flYaw; // 0x18ac        
        float m_flStartTime; // 0x18b0        
        entity2::GameTime_t m_flCursorEnterTime; // 0x18b4        
        bool m_bShowingTooltip; // 0x18b8        
        [[maybe_unused]] std::uint8_t pad_0x18b9[0x1b]; // 0x18b9
        float m_flLastUpdateTime; // 0x18d4        
        client::ParticleIndex_t m_nChannellingParticle; // 0x18d8        
        // metadata: MNetworkEnable
        // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimatingActivity> m_hRoomGate;
        char m_hRoomGate[0x4]; // 0x18dc        
        // metadata: MNetworkEnable
        bool m_bIsBeingChanneled; // 0x18e0        
        [[maybe_unused]] std::uint8_t pad_0x18e1[0x3]; // 0x18e1
        // metadata: MNetworkEnable
        float m_flGoalCaptureProgress; // 0x18e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x18e8);
};
