#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ExternalAnimGraphHandle_t.hpp"
#include "source2sdk/client/ExternalAnimGraphInactiveBehavior_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphDefinition.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CBaseAnimGraph;
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        struct ExternalAnimGraph_t
        {
        public:
            source2sdk::client::ExternalAnimGraphHandle_t m_hExtGraphHandle; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CGlobalSymbol m_sExternalGraphSlotID; // 0x_            
            // m_hGraphDefinition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandleCopyable<source2sdk::resourcesystem::InfoForResourceTypeCNmGraphDefinition> m_hGraphDefinition;
            char m_hGraphDefinition[0x_]; // 0x_            
            // m_hExternalGraphOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CBaseAnimGraph> m_hExternalGraphOwner;
            char m_hExternalGraphOwner[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ExternalAnimGraphInactiveBehavior_t m_nInactiveBehavior; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_hExtGraphHandle) == 0x_);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_sExternalGraphSlotID) == 0x_);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_hGraphDefinition) == 0x_);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_hExternalGraphOwner) == 0x_);
        static_assert(offsetof(source2sdk::client::ExternalAnimGraph_t, m_nInactiveBehavior) == 0x_);
        
        static_assert(sizeof(source2sdk::client::ExternalAnimGraph_t) == 0x_);
    };
};
