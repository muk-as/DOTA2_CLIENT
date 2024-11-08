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
    // Size: 0x898
    // Has VTable
    // Construct allowed
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
        [[maybe_unused]] std::uint8_t pad_0x848[0x8]; // 0x848
        // metadata: MNetworkEnable
        bool m_bActive; // 0x850        
        bool m_bWasActive; // 0x851        
        [[maybe_unused]] std::uint8_t pad_0x852[0x2]; // 0x852
        entity2::GameTime_t m_flEndTime; // 0x854        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0x858        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0x85c        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0x860        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0x868        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0x870        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0x878        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0x87c        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x881[0xf]; // 0x881
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0x890        
        bool m_bRestartAfterRestore; // 0x894        
        [[maybe_unused]] std::uint8_t pad_0x895[0x3];
        
        // Datamap fields:
        // void m_sndCommentary; // 0x888
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
    static_assert(sizeof(C_PointCommentaryNode) == 0x898);
};
