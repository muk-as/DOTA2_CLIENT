#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTAPlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
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
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bStartRecording"
        // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hHero"
        // static metadata: MNetworkVarNames "CHandle< CDOTAPlayerController> m_hPlayer"
        #pragma pack(push, 1)
        class CDOTA_Hero_Recorder : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bStartRecording; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            // metadata: MNetworkEnable
            // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hHero;
            char m_hHero[0x4]; // 0x4e4            
            // metadata: MNetworkEnable
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTAPlayerController> m_hPlayer;
            char m_hPlayer[0x4]; // 0x4e8            
            source2sdk::entity2::GameTime_t m_flStartRecordingTime; // 0x4ec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Hero_Recorder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Hero_Recorder) == 0x4f0);
    };
};
