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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            bool m_bStartRecording; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hHero;
            char m_hHero[0x_]; // 0x_            
            // metadata: MNetworkEnable
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTAPlayerController> m_hPlayer;
            char m_hPlayer[0x_]; // 0x_            
            bool m_bRecording; // 0x_            
            bool m_bLastStartRecording; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flLastCycle; // 0x_            
            std::int32_t m_nCompletedCycles; // 0x_            
            std::int32_t m_nFramesThisCycle; // 0x_            
            std::int32_t m_nRecordedFrames; // 0x_            
            float m_flHeroAdvanceTime; // 0x_            
            float m_flStartTime; // 0x_            
            // m_flCycles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flCycles;
            char m_flCycles[0x_]; // 0x_            
            // m_pBatchFiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString*> m_pBatchFiles;
            char m_pBatchFiles[0x_]; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Hero_Recorder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Hero_Recorder) == 0x_);
    };
};
