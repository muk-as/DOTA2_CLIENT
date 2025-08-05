#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DOTAPlayerController;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_DOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x9e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "bool m_bStartRecording"
        // static metadata: MNetworkVarNames "CHandle< C_DOTA_BaseNPC> m_hHero"
        // static metadata: MNetworkVarNames "CHandle< C_DOTAPlayerController> m_hPlayer"
        #pragma pack(push, 1)
        class C_DOTA_Hero_Recorder : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            bool m_bStartRecording; // 0x5e8            
            uint8_t _pad05e9[0x3]; // 0x5e9
            // metadata: MNetworkEnable
            // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hHero;
            char m_hHero[0x4]; // 0x5ec            
            // metadata: MNetworkEnable
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTAPlayerController> m_hPlayer;
            char m_hPlayer[0x4]; // 0x5f0            
            bool m_bRecording; // 0x5f4            
            bool m_bLastStartRecording; // 0x5f5            
            uint8_t _pad05f6[0x2]; // 0x5f6
            float m_flLastCycle; // 0x5f8            
            std::int32_t m_nCompletedCycles; // 0x5fc            
            std::int32_t m_nFramesThisCycle; // 0x600            
            std::int32_t m_nRecordedFrames; // 0x604            
            float m_flHeroAdvanceTime; // 0x608            
            float m_flStartTime; // 0x60c            
            // m_flCycles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flCycles;
            char m_flCycles[0x18]; // 0x610            
            // m_pBatchFiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString*> m_pBatchFiles;
            char m_pBatchFiles[0x18]; // 0x628            
            uint8_t _pad0640[0x3a0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Hero_Recorder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Hero_Recorder) == 0x9e0);
    };
};
