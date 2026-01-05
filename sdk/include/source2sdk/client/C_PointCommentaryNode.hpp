#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CSoundPatch;
    };
};
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        class C_PointCommentaryNode : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            bool m_bActive; // 0x_            
            bool m_bWasActive; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::GameTime_t m_flEndTime; // 0x_            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            // metadata: MNetworkEnable
            float m_flStartTimeInCommentary; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszCommentaryFile; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszTitle; // 0x_            
            // metadata: MNetworkEnable
            CUtlSymbolLarge m_iszSpeakers; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumber; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_iNodeNumberMax; // 0x_            
            // metadata: MNetworkEnable
            bool m_bListenedTo; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MSaveOpsForField
            source2sdk::client::CSoundPatch* m_sndCommentary; // 0x_            
            // metadata: MNetworkEnable
            // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hViewPosition;
            char m_hViewPosition[0x_]; // 0x_            
            // metadata: MNotSaved
            bool m_bRestartAfterRestore; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_PointCommentaryNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_PointCommentaryNode) == 0x_);
    };
};
