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
    // Size: 0x1958
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
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
        int32_t m_nOptionNumber; // 0x18e0        
        float m_flMovePlayersRadius; // 0x18e4        
        client::CDOTA_BaseNPC_AghsFort_Watch_Tower__ExitDirection_t m_nExitDirection; // 0x18e8        
        Vector m_vExitLocation; // 0x18ec        
        int32_t m_nPathSelectedID; // 0x18f8        
        // metadata: MNetworkEnable
        int32_t m_nEncounterType; // 0x18fc        
        // metadata: MNetworkEnable
        bool m_bIsEliteEncounter; // 0x1900        
        // metadata: MNetworkEnable
        bool m_bIsAscensionLevelPicker; // 0x1901        
        [[maybe_unused]] std::uint8_t pad_0x1902[0x6]; // 0x1902
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strEncounterName; // 0x1908        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strAscensionAbilities; // 0x1910        
        // metadata: MNetworkEnable
        // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEffigy;
        char m_hEffigy[0x4]; // 0x1918        
        float m_flYaw; // 0x191c        
        float m_flStartTime; // 0x1920        
        entity2::GameTime_t m_flCursorEnterTime; // 0x1924        
        bool m_bShowingTooltip; // 0x1928        
        [[maybe_unused]] std::uint8_t pad_0x1929[0x1b]; // 0x1929
        float m_flLastUpdateTime; // 0x1944        
        client::ParticleIndex_t m_nChannellingParticle; // 0x1948        
        // metadata: MNetworkEnable
        // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimatingActivity> m_hRoomGate;
        char m_hRoomGate[0x4]; // 0x194c        
        // metadata: MNetworkEnable
        bool m_bIsBeingChanneled; // 0x1950        
        [[maybe_unused]] std::uint8_t pad_0x1951[0x3]; // 0x1951
        // metadata: MNetworkEnable
        float m_flGoalCaptureProgress; // 0x1954        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1958);
};
