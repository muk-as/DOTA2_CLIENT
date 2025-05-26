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
        // Size: 0x1a18
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
            uint8_t _pad19a8[0x10]; // 0x19a8
            std::int32_t m_nOptionNumber; // 0x19b8            
            float m_flMovePlayersRadius; // 0x19bc            
            source2sdk::server::CDOTA_BaseNPC_AghsFort_Watch_Tower_ExitDirection_t m_nExitDirection; // 0x19c0            
            Vector m_vExitLocation; // 0x19c4            
            std::int32_t m_nPathSelectedID; // 0x19d0            
            // metadata: MNetworkEnable
            std::int32_t m_nEncounterType; // 0x19d4            
            // metadata: MNetworkEnable
            bool m_bIsEliteEncounter; // 0x19d8            
            // metadata: MNetworkEnable
            bool m_bIsAscensionLevelPicker; // 0x19d9            
            uint8_t _pad19da[0x6]; // 0x19da
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strEncounterName; // 0x19e0            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_strAscensionAbilities; // 0x19e8            
            // metadata: MNetworkEnable
            // m_hEffigy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hEffigy;
            char m_hEffigy[0x4]; // 0x19f0            
            std::int32_t m_nDepth; // 0x19f4            
            // m_hPedestal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC_Effigy_AghsFort> m_hPedestal;
            char m_hPedestal[0x4]; // 0x19f8            
            // m_hParticleSystem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hParticleSystem;
            char m_hParticleSystem[0x4]; // 0x19fc            
            uint8_t _pad1a00[0x8]; // 0x1a00
            // metadata: MNetworkEnable
            // m_hRoomGate has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseAnimatingActivity> m_hRoomGate;
            char m_hRoomGate[0x4]; // 0x1a08            
            // metadata: MNetworkEnable
            bool m_bIsBeingChanneled; // 0x1a0c            
            uint8_t _pad1a0d[0x3]; // 0x1a0d
            // metadata: MNetworkEnable
            float m_flGoalCaptureProgress; // 0x1a10            
            uint8_t _pad1a14[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_BaseNPC_AghsFort_Watch_Tower because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_BaseNPC_AghsFort_Watch_Tower) == 0x1a18);
    };
};
