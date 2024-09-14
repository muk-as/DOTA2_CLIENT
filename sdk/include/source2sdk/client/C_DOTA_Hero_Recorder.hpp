#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTAPlayerController;
};

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x930
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bStartRecording"
    // static metadata: MNetworkVarNames "CHandle< C_DOTA_BaseNPC> m_hHero"
    // static metadata: MNetworkVarNames "CHandle< C_DOTAPlayerController> m_hPlayer"
    #pragma pack(push, 1)
    class C_DOTA_Hero_Recorder : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bStartRecording; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x3]; // 0x539
        // metadata: MNetworkEnable
        // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hHero;
        char m_hHero[0x4]; // 0x53c        
        // metadata: MNetworkEnable
        // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTAPlayerController> m_hPlayer;
        char m_hPlayer[0x4]; // 0x540        
        bool m_bRecording; // 0x544        
        bool m_bLastStartRecording; // 0x545        
        [[maybe_unused]] std::uint8_t pad_0x546[0x2]; // 0x546
        float m_flLastCycle; // 0x548        
        int32_t m_nCompletedCycles; // 0x54c        
        int32_t m_nFramesThisCycle; // 0x550        
        int32_t m_nRecordedFrames; // 0x554        
        float m_flHeroAdvanceTime; // 0x558        
        float m_flStartTime; // 0x55c        
        // m_flCycles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flCycles;
        char m_flCycles[0x18]; // 0x560        
        // m_pBatchFiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString*> m_pBatchFiles;
        char m_pBatchFiles[0x18]; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x590[0x3a0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Hero_Recorder because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Hero_Recorder) == 0x930);
};
