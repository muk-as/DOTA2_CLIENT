#pragma once
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
    // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
    // static metadata: MNetworkVarNames "string_t m_iszTitle"
    // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
    // static metadata: MNetworkVarNames "int m_iNodeNumber"
    // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
    // static metadata: MNetworkVarNames "bool m_bListenedTo"
    // static metadata: MNetworkVarNames "CHandle< C_BaseEntity> m_hViewPosition"
    #pragma pack(push, 1)
    class C_PointCommentaryNode : public client::CBaseAnimatingActivity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x800[0x8]; // 0x800
        // metadata: MNetworkEnable
        bool m_bActive; // 0x808        
        bool m_bWasActive; // 0x809        
        [[maybe_unused]] std::uint8_t pad_0x80a[0x2]; // 0x80a
        entity2::GameTime_t m_flEndTime; // 0x80c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x810        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0x814        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0x818        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0x820        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0x828        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0x830        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0x834        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x839[0xf]; // 0x839
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0x848        
        bool m_bRestartAfterRestore; // 0x84c        
        [[maybe_unused]] std::uint8_t pad_0x84d[0x3];
        
        // Datamap fields:
        // void m_sndCommentary; // 0x840
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
    static_assert(sizeof(C_PointCommentaryNode) == 0x850);
};
