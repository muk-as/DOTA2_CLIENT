#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
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
        #pragma pack(push, 1)
        class CInstructorEventEntity : public source2sdk::server::CPointEntity
        {
        public:
            CUtlSymbolLarge m_iszName; // 0x_            
            CUtlSymbolLarge m_iszHintTargetEntity; // 0x_            
            // m_hTargetPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBasePlayerPawn> m_hTargetPlayer;
            char m_hTargetPlayer[0x_]; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge InputShowHint; // 0x_
            // void InputEndHint; // 0x_
            // void InputSetTargetPlayerToActivator; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInstructorEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInstructorEventEntity) == 0x_);
    };
};
