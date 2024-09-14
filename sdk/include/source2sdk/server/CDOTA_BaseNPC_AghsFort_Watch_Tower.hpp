#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_AghsFort_Watch_Tower__ExitDirection_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseAnimatingActivity;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC_Effigy_AghsFort;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1990
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
    class CDOTA_BaseNPC_AghsFort_Watch_Tower : public server::CDOTA_BaseNPC_Building
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1920[0x10]; // 0x1920
        int32_t m_nOptionNumber; // 0x1930        
        float m_flMovePlayersRadius; // 0x1934        
        server::CDOTA_BaseNPC_AghsFort_Watch_Tower__ExitDirection_t m_nExitDirection; // 0x1938        
        Vector m_vExitLocation; // 0x193c        
        int32_t m_nPathSelectedID; // 0x1948        
        // metadata: MNetworkEnable
        int32_t m_nEncounterType; // 0x194c        
        // metadata: MNetworkEnable
        bool m_bIsEliteEncounter; // 0x1950        
        // metadata: MNetworkEnable
        bool m_bIsAscensionLevelPicker; // 0x1951        
        [[maybe_unused]] std::uint8_t pad_0x1952[0x6]; // 0x1952
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strEncounterName; // 0x1958        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_strAscensionAbilities; // 0x1960        
        // metadata: MNetworkEnable
        // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEffigy;
        char m_hEffigy[0x4]; // 0x1968        
        int32_t m_nDepth; // 0x196c        
        // m_hPedestal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC_Effigy_AghsFort> m_hPedestal;
        char m_hPedestal[0x4]; // 0x1970        
        // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hParticleSystem;
        char m_hParticleSystem[0x4]; // 0x1974        
        [[maybe_unused]] std::uint8_t pad_0x1978[0x8]; // 0x1978
        // metadata: MNetworkEnable
        // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseAnimatingActivity> m_hRoomGate;
        char m_hRoomGate[0x4]; // 0x1980        
        // metadata: MNetworkEnable
        bool m_bIsBeingChanneled; // 0x1984        
        [[maybe_unused]] std::uint8_t pad_0x1985[0x3]; // 0x1985
        // metadata: MNetworkEnable
        float m_flGoalCaptureProgress; // 0x1988        
        [[maybe_unused]] std::uint8_t pad_0x198c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1990);
};
