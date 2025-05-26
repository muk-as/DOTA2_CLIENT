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
            bool m_bStartRecording; // 0x5e0            
            uint8_t _pad05e1[0x3]; // 0x5e1
            // metadata: MNetworkEnable
            // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hHero;
            char m_hHero[0x4]; // 0x5e4            
            // metadata: MNetworkEnable
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTAPlayerController> m_hPlayer;
            char m_hPlayer[0x4]; // 0x5e8            
            bool m_bRecording; // 0x5ec            
            bool m_bLastStartRecording; // 0x5ed            
            uint8_t _pad05ee[0x2]; // 0x5ee
            float m_flLastCycle; // 0x5f0            
            std::int32_t m_nCompletedCycles; // 0x5f4            
            std::int32_t m_nFramesThisCycle; // 0x5f8            
            std::int32_t m_nRecordedFrames; // 0x5fc            
            float m_flHeroAdvanceTime; // 0x600            
            float m_flStartTime; // 0x604            
            // m_flCycles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flCycles;
            char m_flCycles[0x18]; // 0x608            
            // m_pBatchFiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString*> m_pBatchFiles;
            char m_pBatchFiles[0x18]; // 0x620            
            uint8_t _pad0638[0x3a8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Hero_Recorder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Hero_Recorder) == 0x9e0);
    };
};
