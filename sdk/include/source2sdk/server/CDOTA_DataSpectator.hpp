#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_DataNonSpectator.hpp"
#include "source2sdk/server/DOTAThreatLevelInfo_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPowerupRune_1"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hPowerupRune_2"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_1"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_2"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_3"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hBountyRune_4"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hXPRune_1"
        // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hXPRune_2"
        // static metadata: MNetworkVarNames "int m_iNetWorth"
        // static metadata: MNetworkVarNames "float m_fRadiantWinProbability"
        // static metadata: MNetworkVarNames "DOTAThreatLevelInfo_t m_ThreatLevelInfos"
        #pragma pack(push, 1)
        class CDOTA_DataSpectator : public source2sdk::server::CDOTA_DataNonSpectator
        {
        public:
            // metadata: MNetworkEnable
            // m_hPowerupRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPowerupRune_1;
            char m_hPowerupRune_1[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hPowerupRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hPowerupRune_2;
            char m_hPowerupRune_2[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hBountyRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_1;
            char m_hBountyRune_1[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hBountyRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_2;
            char m_hBountyRune_2[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hBountyRune_3 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_3;
            char m_hBountyRune_3[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hBountyRune_4 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hBountyRune_4;
            char m_hBountyRune_4[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hXPRune_1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hXPRune_1;
            char m_hXPRune_1[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hXPRune_2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hXPRune_2;
            char m_hXPRune_2[0x_]; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNetWorth[24]; // 0x_            
            // metadata: MNetworkEnable
            float m_fRadiantWinProbability; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_ThreatLevelInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::DOTAThreatLevelInfo_t> m_ThreatLevelInfos;
            char m_ThreatLevelInfos[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_DataSpectator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_DataSpectator) == 0x_);
    };
};
