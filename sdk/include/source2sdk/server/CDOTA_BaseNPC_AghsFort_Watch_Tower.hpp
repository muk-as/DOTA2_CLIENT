#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseAnimatingActivity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC_Effigy_AghsFort;
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
        // Size: 0x1a68
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
        class CDOTA_BaseNPC_AghsFort_Watch_Tower : public source2sdk::server::CDOTA_BaseNPC_Building
        {
        public:
            uint8_t _pad19f8[0x10]; // 0x19f8
            std::int32_t m_nOptionNumber; // 0x1a08            
            float m_flMovePlayersRadius; // 0x1a0c            
            source2sdk::server::CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t m_nExitDirection; // 0x1a10            
            Vector m_vExitLocation; // 0x1a14            
            std::int32_t m_nPathSelectedID; // 0x1a20            
            // metadata: MNetworkEnable
            std::int32_t m_nEncounterType; // 0x1a24            
            // metadata: MNetworkEnable
            bool m_bIsEliteEncounter; // 0x1a28            
            // metadata: MNetworkEnable
            bool m_bIsAscensionLevelPicker; // 0x1a29            
            uint8_t _pad1a2a[0x6]; // 0x1a2a
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strEncounterName; // 0x1a30            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strAscensionAbilities; // 0x1a38            
            // metadata: MNetworkEnable
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x1a40            
            std::int32_t m_nDepth; // 0x1a44            
            // m_hPedestal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Effigy_AghsFort> m_hPedestal;
            char m_hPedestal[0x4]; // 0x1a48            
            // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hParticleSystem;
            char m_hParticleSystem[0x4]; // 0x1a4c            
            uint8_t _pad1a50[0x8]; // 0x1a50
            // metadata: MNetworkEnable
            // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimatingActivity> m_hRoomGate;
            char m_hRoomGate[0x4]; // 0x1a58            
            // metadata: MNetworkEnable
            bool m_bIsBeingChanneled; // 0x1a5c            
            uint8_t _pad1a5d[0x3]; // 0x1a5d
            // metadata: MNetworkEnable
            float m_flGoalCaptureProgress; // 0x1a60            
            uint8_t _pad1a64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1a68);
    };
};
