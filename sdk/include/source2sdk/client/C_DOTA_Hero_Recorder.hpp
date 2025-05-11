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
        // Size: 0x910
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
            bool m_bStartRecording; // 0x510            
            uint8_t _pad0511[0x3]; // 0x511
            // metadata: MNetworkEnable
            // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTA_BaseNPC> m_hHero;
            char m_hHero[0x4]; // 0x514            
            // metadata: MNetworkEnable
            // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DOTAPlayerController> m_hPlayer;
            char m_hPlayer[0x4]; // 0x518            
            bool m_bRecording; // 0x51c            
            bool m_bLastStartRecording; // 0x51d            
            uint8_t _pad051e[0x2]; // 0x51e
            float m_flLastCycle; // 0x520            
            std::int32_t m_nCompletedCycles; // 0x524            
            std::int32_t m_nFramesThisCycle; // 0x528            
            std::int32_t m_nRecordedFrames; // 0x52c            
            float m_flHeroAdvanceTime; // 0x530            
            float m_flStartTime; // 0x534            
            // m_flCycles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_flCycles;
            char m_flCycles[0x18]; // 0x538            
            // m_pBatchFiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString*> m_pBatchFiles;
            char m_pBatchFiles[0x18]; // 0x550            
            uint8_t _pad0568[0x3a8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Hero_Recorder because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Hero_Recorder) == 0x910);
    };
};
