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
    // Size: 0x18f0
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
        int32_t m_nOptionNumber; // 0x1878        
        float m_flMovePlayersRadius; // 0x187c        
        client::CDOTA_BaseNPC_AghsFort_Watch_Tower__ExitDirection_t m_nExitDirection; // 0x1880        
        Vector m_vExitLocation; // 0x1884        
        int32_t m_nPathSelectedID; // 0x1890        
        // metadata: MNetworkEnable
        int32_t m_nEncounterType; // 0x1894        
        // metadata: MNetworkEnable
        bool m_bIsEliteEncounter; // 0x1898        
        // metadata: MNetworkEnable
        bool m_bIsAscensionLevelPicker; // 0x1899        
        [[maybe_unused]] std::uint8_t pad_0x189a[0x6]; // 0x189a
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strEncounterName; // 0x18a0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strAscensionAbilities; // 0x18a8        
        // metadata: MNetworkEnable
        // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEffigy;
        char m_hEffigy[0x4]; // 0x18b0        
        float m_flYaw; // 0x18b4        
        float m_flStartTime; // 0x18b8        
        entity2::GameTime_t m_flCursorEnterTime; // 0x18bc        
        bool m_bShowingTooltip; // 0x18c0        
        [[maybe_unused]] std::uint8_t pad_0x18c1[0x1b]; // 0x18c1
        float m_flLastUpdateTime; // 0x18dc        
        client::ParticleIndex_t m_nChannellingParticle; // 0x18e0        
        // metadata: MNetworkEnable
        // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimatingActivity> m_hRoomGate;
        char m_hRoomGate[0x4]; // 0x18e4        
        // metadata: MNetworkEnable
        bool m_bIsBeingChanneled; // 0x18e8        
        [[maybe_unused]] std::uint8_t pad_0x18e9[0x3]; // 0x18e9
        // metadata: MNetworkEnable
        float m_flGoalCaptureProgress; // 0x18ec        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x18f0);
};
